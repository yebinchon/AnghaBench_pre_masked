
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct csio_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct csio_hw*,char*,int ,int ) ;
 void* FUNC_2 (struct csio_hw*,int ) ;

__attribute__((used)) static void
FUNC_3(struct csio_hw *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = FUNC_2(VAR_7, VAR_4);

 if (VAR_9 & VAR_1) {
  VAR_8 = FUNC_2(VAR_7, VAR_3);
  FUNC_1(VAR_7, "mc0", VAR_5,
         FUNC_0(VAR_8));
 }
 if (VAR_9 & VAR_0) {
  VAR_8 = FUNC_2(VAR_7, VAR_2);
  FUNC_1(VAR_7, "mc1", VAR_6,
         FUNC_0(VAR_8));
 }
}
