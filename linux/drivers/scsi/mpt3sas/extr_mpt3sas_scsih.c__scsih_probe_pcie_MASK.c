
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pcie_device {scalar_t__ access_status; scalar_t__ starget; int id; } ;
struct MPT3SAS_ADAPTER {int is_driver_loading; int shost; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,struct _pcie_device*) ;
 struct _pcie_device* FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,struct _pcie_device*) ;
 int FUNC_3 (struct _pcie_device*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct MPT3SAS_ADAPTER *VAR_2)
{
 struct _pcie_device *VAR_3;
 int VAR_4;


 while ((VAR_3 = FUNC_1(VAR_2))) {
  if (VAR_3->starget) {
   FUNC_3(VAR_3);
   continue;
  }
  if (VAR_3->access_status ==
      VAR_0) {
   FUNC_2(VAR_2, VAR_3);
   FUNC_3(VAR_3);
   continue;
  }
  VAR_4 = FUNC_4(VAR_2->shost, VAR_1,
   VAR_3->id, 0);
  if (VAR_4) {
   FUNC_0(VAR_2, VAR_3);
   FUNC_3(VAR_3);
   continue;
  } else if (!VAR_3->starget) {






   if (!VAR_2->is_driver_loading) {



    FUNC_0(VAR_2, VAR_3);
    FUNC_3(VAR_3);
    continue;
   }
  }
  FUNC_2(VAR_2, VAR_3);
  FUNC_3(VAR_3);
 }
}
