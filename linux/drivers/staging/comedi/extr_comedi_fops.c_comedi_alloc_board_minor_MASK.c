
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct comedi_device {unsigned int minor; int class_dev; int mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct comedi_device* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,unsigned int) ;
 struct comedi_device** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (struct comedi_device*) ;
 int FUNC_5 (struct comedi_device*) ;
 unsigned int VAR_8 ;
 int FUNC_6 (struct comedi_device*,struct device*) ;
 int FUNC_7 (struct device*,char*) ;
 struct device* FUNC_8 (int ,struct device*,int ,int *,char*,unsigned int) ;
 int FUNC_9 (struct device*) ;
 struct comedi_device* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

struct comedi_device *FUNC_13(struct device *VAR_9)
{
 struct comedi_device *VAR_10;
 struct device *VAR_11;
 unsigned int VAR_12;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return FUNC_0(-VAR_3);
 FUNC_5(VAR_10);
 FUNC_6(VAR_10, VAR_9);
 FUNC_11(&VAR_10->mutex);
 FUNC_11(&VAR_6);
 for (VAR_12 = VAR_9 ? VAR_8 : 0;
      VAR_12 < VAR_1; ++VAR_12) {
  if (!VAR_5[VAR_12]) {
   VAR_5[VAR_12] = VAR_10;
   break;
  }
 }
 FUNC_12(&VAR_6);
 if (VAR_12 == VAR_1) {
  FUNC_12(&VAR_10->mutex);
  FUNC_4(VAR_10);
  FUNC_3(VAR_10);
  FUNC_7(VAR_9,
   "ran out of minor numbers for board device files\n");
  return FUNC_0(-VAR_2);
 }
 VAR_10->minor = VAR_12;
 VAR_11 = FUNC_8(VAR_7, VAR_9,
         FUNC_2(VAR_0, VAR_12), ((void*)0), "comedi%i", VAR_12);
 if (!FUNC_1(VAR_11))
  VAR_10->class_dev = FUNC_9(VAR_11);


 return VAR_10;
}
