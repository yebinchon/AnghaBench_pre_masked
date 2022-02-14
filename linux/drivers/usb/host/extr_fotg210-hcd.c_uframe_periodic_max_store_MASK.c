
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fotg210_hcd {unsigned int uframe_periodic_max; unsigned int periodic_size; int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct fotg210_hcd*,char*,int,...) ;
 int FUNC_3 (struct fotg210_hcd*,char*) ;
 struct fotg210_hcd* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,int ,unsigned int*) ;
 unsigned short FUNC_6 (unsigned short,int ) ;
 int FUNC_7 (struct fotg210_hcd*,unsigned int,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct fotg210_hcd *VAR_5;
 unsigned VAR_6;
 unsigned VAR_7, VAR_8;
 unsigned short VAR_9;
 unsigned long VAR_10;
 ssize_t VAR_11;

 VAR_5 = FUNC_4(FUNC_0(FUNC_1(VAR_1)));
 if (FUNC_5(VAR_3, 0, &VAR_6) < 0)
  return -VAR_0;

 if (VAR_6 < 100 || VAR_6 >= 125) {
  FUNC_2(VAR_5, "rejecting invalid request for uframe_periodic_max=%u\n",
    VAR_6);
  return -VAR_0;
 }

 VAR_11 = -VAR_0;





 FUNC_8(&VAR_5->lock, VAR_10);






 if (VAR_6 < VAR_5->uframe_periodic_max) {
  VAR_9 = 0;

  for (VAR_7 = 0; VAR_7 < VAR_5->periodic_size; ++VAR_7)
   for (VAR_8 = 0; VAR_8 < 7; ++VAR_8)
    VAR_9 = FUNC_6(VAR_9,
      FUNC_7(VAR_5, VAR_7,
      VAR_8));

  if (VAR_9 > VAR_6) {
   FUNC_2(VAR_5,
     "cannot decrease uframe_periodic_max because periodic bandwidth is already allocated (%u > %u)\n",
     VAR_9, VAR_6);
   goto out_unlock;
  }
 }



 FUNC_2(VAR_5,
   "setting max periodic bandwidth to %u%% (== %u usec/uframe)\n",
   100 * VAR_6/125, VAR_6);

 if (VAR_6 != 100)
  FUNC_3(VAR_5, "max periodic bandwidth set is non-standard\n");

 VAR_5->uframe_periodic_max = VAR_6;
 VAR_11 = VAR_4;

out_unlock:
 FUNC_9(&VAR_5->lock, VAR_10);
 return VAR_11;
}
