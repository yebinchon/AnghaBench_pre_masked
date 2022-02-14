
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (struct csio_hw*,int ,int,int ,int ,int,int *) ;
 int FUNC_5 (struct csio_hw*,int ) ;
 int FUNC_6 (struct csio_hw*,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct csio_hw *VAR_6, uint32_t VAR_7, uint32_t VAR_8,
    int32_t VAR_9, uint32_t VAR_10)
{
 if (!VAR_7 || VAR_7 > 4)
  return -VAR_1;
 if (FUNC_5(VAR_6, VAR_5) & VAR_3)
  return -VAR_0;

 FUNC_6(VAR_6, VAR_10, VAR_4);
 FUNC_6(VAR_6, FUNC_2(VAR_8) | FUNC_0(VAR_7 - 1) |
        FUNC_1(1) | FUNC_3(VAR_9), VAR_5);

 return FUNC_4(VAR_6, VAR_5, VAR_3, 0, VAR_2,
     10, ((void*)0));
}
