
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_dh_blist {char const* driver; scalar_t__ model; scalar_t__ vendor; } ;
struct scsi_device {int model; int vendor; } ;


 scalar_t__ FUNC_0 (struct scsi_device*) ;
 struct scsi_dh_blist* VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static const char *
FUNC_3(struct scsi_device *VAR_1)
{
 const struct scsi_dh_blist *VAR_2;

 if (FUNC_0(VAR_1))
  return "alua";

 for (VAR_2 = VAR_0; VAR_2->vendor; VAR_2++) {
  if (!FUNC_2(VAR_1->vendor, VAR_2->vendor, FUNC_1(VAR_2->vendor)) &&
      !FUNC_2(VAR_1->model, VAR_2->model, FUNC_1(VAR_2->model))) {
   return VAR_2->driver;
  }
 }
 return ((void*)0);
}
