
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,void*,int,int) ;
 int FUNC_1 (struct ubifs_info const*,char*,int,int,...) ;

void FUNC_2(const struct ubifs_info *VAR_2, int VAR_3, int VAR_4,
         void *VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_2, "corruption at LEB %d:%d", VAR_3, VAR_4);
 VAR_6 = VAR_2->leb_size - VAR_4;
 if (VAR_6 > 8192)
  VAR_6 = 8192;
 FUNC_1(VAR_2, "first %d bytes from LEB %d:%d", VAR_6, VAR_3, VAR_4);
 FUNC_0(VAR_1, "", VAR_0, 32, 4, VAR_5, VAR_6, 1);
}
