
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql_adapter {int port_init; int xg_sem_mask; int ndev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_1 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_2 (struct ql_adapter*,int ,int*) ;
 scalar_t__ FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ,int,int ) ;
 int FUNC_6 (struct ql_adapter*,int ,int) ;
 int FUNC_7 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct ql_adapter *VAR_16)
{
 int VAR_17 = 0;
 u32 VAR_18;

 if (FUNC_3(VAR_16, VAR_16->xg_sem_mask)) {



  FUNC_1(VAR_16, VAR_15, VAR_16->ndev,
      "Another function has the semaphore, so wait for the port init bit to come ready.\n");
  VAR_17 = FUNC_5(VAR_16, VAR_11, VAR_16->port_init, 0);
  if (VAR_17) {
   FUNC_0(VAR_16, VAR_15, VAR_16->ndev,
       "Port initialize timed out.\n");
  }
  return VAR_17;
 }

 FUNC_1(VAR_16, VAR_15, VAR_16->ndev, "Got xgmac semaphore!.\n");

 VAR_17 = FUNC_2(VAR_16, VAR_0, &VAR_18);
 if (VAR_17)
  goto end;
 VAR_18 |= VAR_2;
 VAR_17 = FUNC_7(VAR_16, VAR_0, VAR_18);
 if (VAR_17)
  goto end;


 VAR_18 &= ~VAR_2;
 VAR_18 |= VAR_1;
 VAR_18 |= VAR_4;
 VAR_18 |= VAR_3;
 VAR_17 = FUNC_7(VAR_16, VAR_0, VAR_18);
 if (VAR_17)
  goto end;


 VAR_17 = FUNC_2(VAR_16, VAR_12, &VAR_18);
 if (VAR_17)
  goto end;
 VAR_18 &= ~VAR_14;
 VAR_18 |= VAR_13;
 VAR_17 = FUNC_7(VAR_16, VAR_12, VAR_18);
 if (VAR_17)
  goto end;


 VAR_17 = FUNC_2(VAR_16, VAR_8, &VAR_18);
 if (VAR_17)
  goto end;
 VAR_18 &= ~VAR_10;
 VAR_18 |= VAR_9;
 VAR_17 = FUNC_7(VAR_16, VAR_8, VAR_18);
 if (VAR_17)
  goto end;


 VAR_17 =
     FUNC_7(VAR_16, VAR_6, VAR_7 | (0x2580 << 16));
 if (VAR_17)
  goto end;
 VAR_17 =
     FUNC_7(VAR_16, VAR_5, 0x2580);
 if (VAR_17)
  goto end;


 FUNC_6(VAR_16, VAR_11, ((VAR_16->port_init << 16) | VAR_16->port_init));
end:
 FUNC_4(VAR_16, VAR_16->xg_sem_mask);
 return VAR_17;
}
