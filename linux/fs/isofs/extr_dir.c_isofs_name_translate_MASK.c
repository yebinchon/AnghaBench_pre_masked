
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_directory_record {char* name; int* name_len; } ;
struct inode {int dummy; } ;



int FUNC_0(struct iso_directory_record *VAR_0, char *VAR_1, struct inode *VAR_2)
{
 char * VAR_3 = VAR_0->name;
 int VAR_4 = VAR_0->name_len[0];
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned char VAR_6 = VAR_3[VAR_5];
  if (!VAR_6)
   break;

  if (VAR_6 >= 'A' && VAR_6 <= 'Z')
   VAR_6 |= 0x20;


  if (VAR_6 == '.' && VAR_5 == VAR_4 - 3 && VAR_3[VAR_5 + 1] == ';' && VAR_3[VAR_5 + 2] == '1')
   break;


  if (VAR_6 == ';' && VAR_5 == VAR_4 - 2 && VAR_3[VAR_5 + 1] == '1')
   break;



  if (VAR_6 == ';' || VAR_6 == '/')
   VAR_6 = '.';

  VAR_1[VAR_5] = VAR_6;
 }
 return VAR_5;
}
