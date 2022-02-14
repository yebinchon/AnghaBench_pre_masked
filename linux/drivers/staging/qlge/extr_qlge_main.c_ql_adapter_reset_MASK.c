
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int ndev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_3 (struct ql_adapter*) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*) ;
 int FUNC_7 (struct ql_adapter*,int ,int) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 unsigned long FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ql_adapter *VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;


 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11) {
  FUNC_2(VAR_9, VAR_7, VAR_9->ndev, "Failed to clear routing bits.\n");
  return VAR_11;
 }




 if (!FUNC_8(VAR_3, &VAR_9->flags)) {

  FUNC_4(VAR_9, VAR_2);


  FUNC_6(VAR_9);
 } else
  FUNC_0(VAR_3, &VAR_9->flags);

 FUNC_7(VAR_9, VAR_4, (VAR_5 << 16) | VAR_5);

 VAR_12 = VAR_8 + FUNC_10(30);
 do {
  VAR_10 = FUNC_5(VAR_9, VAR_4);
  if ((VAR_10 & VAR_5) == 0)
   break;
  FUNC_1();
 } while (FUNC_9(VAR_8, VAR_12));

 if (VAR_10 & VAR_5) {
  FUNC_2(VAR_9, VAR_6, VAR_9->ndev,
     "ETIMEDOUT!!! errored out of resetting the chip!\n");
  VAR_11 = -VAR_0;
 }


 FUNC_4(VAR_9, VAR_1);
 return VAR_11;
}
