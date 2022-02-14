
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int min_io_size; int leb_size; int sbuf; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ubifs_info*,int) ;
 int FUNC_2 (struct ubifs_info*,int,int ,int) ;
 int FUNC_3 (struct ubifs_info*,int,int ,int ,int,int) ;
 int FUNC_4 (struct ubifs_info*,int) ;

__attribute__((used)) static int FUNC_5(struct ubifs_info *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_2 >= 0);
 FUNC_1(VAR_0, VAR_2 % VAR_0->min_io_size == 0);
 FUNC_1(VAR_0, VAR_2 < VAR_0->leb_size);

 if (VAR_2 == 0) {
  FUNC_0("unmap empty LEB %d", VAR_1);
  return FUNC_4(VAR_0, VAR_1);
 }

 FUNC_0("fixup LEB %d, data len %d", VAR_1, VAR_2);
 VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_0->sbuf, 0, VAR_2, 1);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(VAR_0, VAR_1, VAR_0->sbuf, VAR_2);
}
