
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iso_directory_record {int* name_len; int* length; int* flags; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct iso_directory_record*,char*,struct inode*) ;
 int FUNC_1 (char*,char*,unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char*,char*,int) ;

int FUNC_3(struct iso_directory_record *VAR_0,
       char *VAR_1, struct inode *VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4;
 int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_5 == 0)
  return 0;
 VAR_3 = sizeof(struct iso_directory_record) + VAR_0->name_len[0];
 if (VAR_3 & 1)
  VAR_3++;
 if (VAR_0->length[0] - VAR_3 != 32)
  return VAR_5;
 VAR_4 = ((unsigned char *) VAR_0) + VAR_3;
 if (FUNC_2(VAR_4, "ARCHIMEDES", 10))
  return VAR_5;
 if ((*VAR_1 == '_') && ((VAR_4[19] & 1) == 1))
  *VAR_1 = '!';
 if (((VAR_0->flags[0] & 2) == 0) && (VAR_4[13] == 0xff)
  && ((VAR_4[12] & 0xf0) == 0xf0)) {
  VAR_1[VAR_5] = ',';
  FUNC_1(VAR_1+VAR_5+1, "%3.3x",
   ((VAR_4[12] & 0xf) << 8) | VAR_4[11]);
  VAR_5 += 4;
 }
 return VAR_5;
}
