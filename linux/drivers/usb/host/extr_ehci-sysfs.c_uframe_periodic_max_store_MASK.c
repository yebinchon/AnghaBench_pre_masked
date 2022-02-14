
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct ehci_hcd {unsigned int uframe_periodic_max; int lock; int * bandwidth; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct ehci_hcd*,char*,int,...) ;
 int FUNC_2 (struct ehci_hcd*,char*) ;
 struct ehci_hcd* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,int ,unsigned int*) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct ehci_hcd *VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 unsigned long VAR_9;
 ssize_t VAR_10;

 VAR_6 = FUNC_3(FUNC_0(VAR_2));
 if (FUNC_4(VAR_4, 0, &VAR_7) < 0)
  return -VAR_1;

 if (VAR_7 < 100 || VAR_7 >= 125) {
  FUNC_1(VAR_6, "rejecting invalid request for "
    "uframe_periodic_max=%u\n", VAR_7);
  return -VAR_1;
 }

 VAR_10 = -VAR_1;





 FUNC_6 (&VAR_6->lock, VAR_9);





 if (VAR_7 < VAR_6->uframe_periodic_max) {
  u8 VAR_11 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8)
   VAR_11 = FUNC_5(VAR_11,
     VAR_6->bandwidth[VAR_8]);

  if (VAR_11 > VAR_7) {
   FUNC_1(VAR_6,
    "cannot decrease uframe_periodic_max because "
    "periodic bandwidth is already allocated "
    "(%u > %u)\n",
    VAR_11, VAR_7);
   goto out_unlock;
  }
 }



 FUNC_1(VAR_6, "setting max periodic bandwidth to %u%% "
   "(== %u usec/uframe)\n",
   100*VAR_7/125, VAR_7);

 if (VAR_7 != 100)
  FUNC_2(VAR_6, "max periodic bandwidth set is non-standard\n");

 VAR_6->uframe_periodic_max = VAR_7;
 VAR_10 = VAR_5;

out_unlock:
 FUNC_7 (&VAR_6->lock, VAR_9);
 return VAR_10;
}
