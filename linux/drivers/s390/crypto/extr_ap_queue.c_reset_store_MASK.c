
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ap_queue {int qid; int lock; int state; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct ap_queue*) ;
 int FUNC_4 (struct ap_queue*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ap_queue* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct ap_queue *VAR_7 = FUNC_8(VAR_3);

 FUNC_6(&VAR_7->lock);
 FUNC_3(VAR_7);
 VAR_7->state = VAR_1;
 FUNC_5(FUNC_4(VAR_7, VAR_0));
 FUNC_7(&VAR_7->lock);

 FUNC_0(VAR_2, "reset queue=%02x.%04x triggered by user\n",
        FUNC_1(VAR_7->qid), FUNC_2(VAR_7->qid));

 return VAR_6;
}
