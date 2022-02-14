
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct niu {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_1 (struct niu*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct niu *VAR_7)
{
 u64 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_2(VAR_6);
 VAR_11 = 100;
 while (--VAR_11 >= 0 && (VAR_8 != VAR_9)) {
  VAR_8 = FUNC_2(VAR_5);
  VAR_9 = FUNC_2(VAR_6);
 }
 if (VAR_11 < 0 &&
     (VAR_8 != 0 && VAR_9 != 1)) {
  FUNC_0(VAR_7->dev, "IPP would not quiesce, rd_ptr[%llx] wr_ptr[%llx]\n",
      (unsigned long long)FUNC_2(VAR_5),
      (unsigned long long)FUNC_2(VAR_6));
 }

 VAR_10 = FUNC_2(VAR_0);
 VAR_10 &= ~(VAR_4 |
   VAR_2 |
   VAR_3 |
   VAR_1);
 FUNC_3(VAR_0, VAR_10);

 (void) FUNC_1(VAR_7);
}
