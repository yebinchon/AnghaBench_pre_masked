
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ddb_info {int dummy; } ;
struct ddb_device_id {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; struct ddb_info const* info; } ;


 int FUNC_0 (struct ddb_device_id*) ;
 struct ddb_device_id* VAR_0 ;
 struct ddb_info const VAR_1 ;

const struct ddb_info *FUNC_1(u16 VAR_2, u16 VAR_3,
        u16 VAR_4, u16 VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  const struct ddb_device_id *VAR_7 = &VAR_0[VAR_6];

  if (VAR_2 == VAR_7->vendor &&
      VAR_3 == VAR_7->device &&
      VAR_4 == VAR_7->subvendor &&
      (VAR_5 == VAR_7->subdevice ||
       VAR_7->subdevice == 0xffff))
   return VAR_7->info;
 }

 return &VAR_1;
}
