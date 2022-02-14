
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csio_hw {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csio_hw*,char*,int,int) ;
 int FUNC_1 (struct csio_hw*,int,int) ;
 int FUNC_2 (struct csio_hw*,int,int ,int,int) ;
 int FUNC_3 (struct csio_hw*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct csio_hw *VAR_3, int32_t VAR_4, int32_t VAR_5)
{
 int VAR_6 = 0;

 while (VAR_4 <= VAR_5) {

  VAR_6 = FUNC_2(VAR_3, 1, 0, 1, VAR_2);
  if (VAR_6 != 0)
   goto out;

  VAR_6 = FUNC_2(VAR_3, 4, 0, 1,
     VAR_0 | (VAR_4 << 8));
  if (VAR_6 != 0)
   goto out;

  VAR_6 = FUNC_1(VAR_3, 14, 500);
  if (VAR_6 != 0)
   goto out;

  VAR_4++;
 }
out:
 if (VAR_6)
  FUNC_0(VAR_3, "erase of flash sector %d failed, error %d\n",
    VAR_4, VAR_6);
 FUNC_3(VAR_3, 0, VAR_1);
 return 0;
}
