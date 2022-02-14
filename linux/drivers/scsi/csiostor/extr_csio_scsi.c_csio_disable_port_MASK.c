
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct csio_lnode {int portid; } ;
struct csio_hw {int lock; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct csio_hw*,int ,int) ;
 struct csio_hw* FUNC_2 (struct csio_lnode*) ;
 int FUNC_3 (struct csio_hw*,int ) ;
 int FUNC_4 (struct csio_hw*,int ) ;
 struct csio_lnode* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1,
     struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct csio_lnode *VAR_5 = FUNC_5(FUNC_0(VAR_1));
 struct csio_hw *VAR_6 = FUNC_2(VAR_5);
 bool VAR_7;

 if (*VAR_3 == '1' || *VAR_3 == '0')
  VAR_7 = (*VAR_3 == '1') ? 1 : 0;
 else
  return -VAR_0;


 FUNC_3(VAR_6, VAR_5->portid);

 FUNC_6(&VAR_6->lock);
 FUNC_1(VAR_6, VAR_5->portid, VAR_7);
 FUNC_7(&VAR_6->lock);


 FUNC_4(VAR_6, VAR_5->portid);
 return VAR_4;
}
