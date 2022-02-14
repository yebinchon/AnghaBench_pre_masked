
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union oid_res_t {scalar_t__ u; struct obj_key* ptr; } ;
typedef scalar_t__ u32 ;
struct obj_key {int key; int length; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
typedef int islpci_private ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct obj_key*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int *,union oid_res_t*) ;
 int * FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_11, struct iw_request_info *VAR_12,
     struct iw_point *VAR_13, char *VAR_14)
{
 islpci_private *VAR_15 = FUNC_3(VAR_11);
 struct obj_key *VAR_16;
 u32 VAR_17, VAR_18 = (VAR_13->flags & VAR_8) - 1;
 u32 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 int VAR_22;
 union oid_res_t VAR_23;


 VAR_22 = FUNC_2(VAR_15, VAR_2, 0, ((void*)0), &VAR_23);
 VAR_19 = VAR_23.u;
 VAR_22 |= FUNC_2(VAR_15, VAR_6, 0, ((void*)0), &VAR_23);
 VAR_20 = VAR_23.u;
 VAR_22 |= FUNC_2(VAR_15, VAR_5, 0, ((void*)0), &VAR_23);
 VAR_21 = VAR_23.u;

 if (VAR_20 && (VAR_19 == VAR_0) && VAR_21)
  VAR_13->flags = VAR_10;
 else if ((VAR_19 == VAR_1) && !VAR_21) {
  if (VAR_20)
   VAR_13->flags = VAR_9;
  else
   VAR_13->flags = VAR_7;
 } else

  VAR_13->flags = 0;


 VAR_22 |= FUNC_2(VAR_15, VAR_3, 0, ((void*)0), &VAR_23);
 VAR_17 = VAR_23.u;

 if (VAR_18 == -1 || VAR_18 > 3)

  VAR_18 = VAR_17;
 VAR_22 |= FUNC_2(VAR_15, VAR_4, VAR_18, ((void*)0), &VAR_23);
 VAR_16 = VAR_23.ptr;
 VAR_13->length = VAR_16->length;
 FUNC_1(VAR_14, VAR_16->key, VAR_13->length);
 FUNC_0(VAR_16);

 VAR_13->flags |= VAR_17 + 1;

 return VAR_22;
}
