
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct nvt_dev* priv; } ;
struct nvt_dev {int lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvt_dev*,int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct rc_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_7,
    struct device_attribute *VAR_8,
    char *VAR_9)
{
 struct rc_dev *VAR_10 = FUNC_5(VAR_7);
 struct nvt_dev *VAR_11 = VAR_10->priv;
 int VAR_12, VAR_13;
 unsigned long VAR_14;
 ssize_t VAR_15 = 0;
 int VAR_16;

 FUNC_3(&VAR_11->lock, VAR_14);

 VAR_12 = FUNC_1(VAR_11, VAR_1);
 VAR_12 = FUNC_0(VAR_12, VAR_6);


 while (FUNC_1(VAR_11, VAR_3))
  FUNC_1(VAR_11, VAR_2);

 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  VAR_13 = FUNC_1(VAR_11, VAR_2);
  VAR_13 = (VAR_13 & VAR_0) * VAR_5;
  VAR_15 += FUNC_2(VAR_9 + VAR_15, VAR_4 - VAR_15,
        "%d ", VAR_13);
 }
 VAR_15 += FUNC_2(VAR_9 + VAR_15, VAR_4 - VAR_15, "\n");

 FUNC_4(&VAR_11->lock, VAR_14);

 return VAR_15;
}
