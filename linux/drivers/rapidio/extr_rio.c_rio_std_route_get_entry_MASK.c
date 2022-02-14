
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__*) ;
 int FUNC_1 (struct rio_mport*,scalar_t__,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_3, u16 VAR_4, u8 VAR_5,
   u16 VAR_6, u16 VAR_7, u8 *VAR_8)
{
 u32 VAR_9;

 if (VAR_6 == VAR_0) {
  FUNC_1(VAR_3, VAR_4, VAR_5,
    VAR_1, VAR_7);
  FUNC_0(VAR_3, VAR_4, VAR_5,
    VAR_2, &VAR_9);

  *VAR_8 = (u8)VAR_9;
 }

 return 0;
}
