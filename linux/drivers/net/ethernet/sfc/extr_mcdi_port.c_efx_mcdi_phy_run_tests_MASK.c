
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct efx_nic {struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int flags; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct efx_nic*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct efx_nic *VAR_7, int *VAR_8,
      unsigned VAR_9)
{
 struct efx_mcdi_phy_data *VAR_10 = VAR_7->phy_data;
 u32 VAR_11;
 int VAR_12;

 if (VAR_10->flags & (1 << VAR_3)) {
  VAR_12 = FUNC_0(VAR_7, VAR_4, VAR_8);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_8 += VAR_12;
 }



 VAR_11 = 0;
 if (VAR_10->flags & (1 << VAR_2)) {
  if ((VAR_9 & VAR_0) &&
      (VAR_10->flags &
       (1 << VAR_1)))
   VAR_11 = VAR_5;
  else
   VAR_11 = VAR_6;
 } else if (VAR_10->flags &
     (1 << VAR_1))
  VAR_11 = VAR_5;

 if (VAR_11 != 0) {
  VAR_12 = FUNC_0(VAR_7, VAR_11, VAR_8);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_8 += VAR_12;
 }

 return 0;
}
