
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_partition {int dummy; } ;
struct cmdline_mtd_partition {int num_parts; char* mtd_id; struct cmdline_mtd_partition* next; struct mtd_partition* parts; } ;


 scalar_t__ FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mtd_partition*) ;
 int FUNC_2 (struct mtd_partition*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 struct mtd_partition* FUNC_4 (char*,char**,int*,int ,unsigned char**,int) ;
 struct cmdline_mtd_partition* VAR_2 ;
 int FUNC_5 (char*,...) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(char *VAR_3)
{
 VAR_1 = 1;

 for( ; VAR_3 != ((void*)0); )
 {
  struct cmdline_mtd_partition *VAR_4;
  struct mtd_partition *VAR_5;
  int VAR_6, VAR_7;
  char *VAR_8, *VAR_9;

  VAR_9 = VAR_3;


  VAR_8 = FUNC_6(VAR_3, ':');
  if (!VAR_8) {
   FUNC_5("no mtd-id\n");
   return -VAR_0;
  }
  VAR_6 = VAR_8 - VAR_9;

  FUNC_3(("parsing <%s>\n", VAR_8+1));





  VAR_5 = FUNC_4(VAR_8 + 1,
    &VAR_3,
    &VAR_7,
    0,
    (unsigned char**)&VAR_4,
    VAR_6 + 1 + sizeof(*VAR_4) +
    sizeof(void*)-1 );
  if (FUNC_1(VAR_5)) {







    return FUNC_2(VAR_5);
   }


  VAR_4 = (struct cmdline_mtd_partition *)
    FUNC_0((unsigned long)VAR_4, sizeof(void *));

  VAR_4->parts = VAR_5;
  VAR_4->num_parts = VAR_7;
  VAR_4->mtd_id = (char*)(VAR_4 + 1);
  FUNC_7(VAR_4->mtd_id, VAR_9, VAR_6 + 1);


  VAR_4->next = VAR_2;
  VAR_2 = VAR_4;

  FUNC_3(("mtdid=<%s> num_parts=<%d>\n",
       VAR_4->mtd_id, VAR_4->num_parts));



  if (*VAR_3 == 0)
   break;


  if (*VAR_3 != ';') {
   FUNC_5("bad character after partition (%c)\n", *VAR_3);
   return -VAR_0;
  }
  VAR_3++;
 }

 return 0;
}
