
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int mac_index; int ndev; int flags; int port_link_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ql3_adapter*,int ,int ,char*,scalar_t__,char*) ;
 int FUNC_2 (struct ql3_adapter*,int ,int ,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ql3_adapter*) ;
 scalar_t__ FUNC_5 (struct ql3_adapter*) ;
 scalar_t__ FUNC_6 (struct ql3_adapter*) ;
 int FUNC_7 (struct ql3_adapter*) ;
 int FUNC_8 (struct ql3_adapter*,scalar_t__) ;
 int FUNC_9 (struct ql3_adapter*,int) ;
 int FUNC_10 (struct ql3_adapter*,int ) ;
 int FUNC_11 (struct ql3_adapter*,int) ;
 int FUNC_12 (struct ql3_adapter*,int) ;
 scalar_t__ FUNC_13 (struct ql3_adapter*) ;
 scalar_t__ FUNC_14 (struct ql3_adapter*,int ,int) ;
 int FUNC_15 (struct ql3_adapter*,int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct ql3_adapter *VAR_7)
{

 if (FUNC_14(VAR_7, VAR_3,
  (VAR_4 | (VAR_7->mac_index) *
    2) << 7))
  return -1;

 if (!FUNC_4(VAR_7)) {
  if (FUNC_16(VAR_2, &VAR_7->flags)) {

   FUNC_2(VAR_7, VAR_6, VAR_0, VAR_7->ndev,
         "Configuring link\n");
   FUNC_11(VAR_7, 1);
   FUNC_9(VAR_7,
           (FUNC_5
     (VAR_7) ==
     VAR_5));
   FUNC_8(VAR_7,
         FUNC_6
         (VAR_7));
   FUNC_10(VAR_7,
      FUNC_7
      (VAR_7));
   FUNC_11(VAR_7, 0);


   FUNC_2(VAR_7, VAR_6, VAR_0, VAR_7->ndev,
         "Enabling mac\n");
   FUNC_12(VAR_7, 1);
  }

  VAR_7->port_link_state = VAR_1;
  FUNC_3(VAR_7->ndev);
  FUNC_0(VAR_7->ndev);
  FUNC_1(VAR_7, VAR_6, VAR_7->ndev,
      "Link is up at %d Mbps, %s duplex\n",
      FUNC_5(VAR_7),
      FUNC_6(VAR_7) ? "full" : "half");

 } else {

  if (FUNC_16(VAR_2, &VAR_7->flags)) {
   FUNC_2(VAR_7, VAR_6, VAR_0, VAR_7->ndev,
         "Remote error detected. Calling ql_port_start()\n");




   FUNC_15(VAR_7, VAR_3);
   if (FUNC_13(VAR_7))
    return -1;
   return 0;
  }
 }
 FUNC_15(VAR_7, VAR_3);
 return 0;
}
