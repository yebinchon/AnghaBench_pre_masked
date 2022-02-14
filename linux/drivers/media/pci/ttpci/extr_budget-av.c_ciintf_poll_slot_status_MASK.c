
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_av {int slot_status; TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dvb_ca_en50221*,int,int ) ;
 int FUNC_1 (struct dvb_ca_en50221*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct saa7146_dev*,int ) ;
 int FUNC_4 (struct saa7146_dev*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dvb_ca_en50221 *VAR_12, int VAR_13, int VAR_14)
{
 struct budget_av *VAR_15 = (struct budget_av *) VAR_12->data;
 struct saa7146_dev *VAR_16 = VAR_15->budget.dev;
 int VAR_17;

 if (VAR_13 != 0)
  return -VAR_3;



 if (VAR_15->slot_status == VAR_8) {
  FUNC_4(VAR_16, 3, VAR_6);
  FUNC_6(1);
  if (FUNC_3(VAR_16, VAR_5) & VAR_4) {
   if (VAR_15->slot_status == VAR_8) {
    VAR_15->slot_status = VAR_9;
    FUNC_2("cam inserted A\n");
   }
  }
  FUNC_4(VAR_16, 3, VAR_7);
 }







 if ((VAR_15->slot_status == VAR_8) || (!VAR_14)) {
  FUNC_4(VAR_15->budget.dev, 1, VAR_7);
  VAR_17 = FUNC_5(&VAR_15->budget, VAR_0, 0, 1, 0, 1);
  if ((VAR_17 >= 0) && (VAR_15->slot_status == VAR_8)) {
   VAR_15->slot_status = VAR_9;
   FUNC_2("cam inserted B\n");
  } else if (VAR_17 < 0) {
   if (VAR_15->slot_status != VAR_8) {
    FUNC_1(VAR_12, VAR_13);
    FUNC_2("cam ejected 5\n");
    return 0;
   }
  }
 }


 if (VAR_15->slot_status == VAR_11) {
  VAR_17 = FUNC_0(VAR_12, VAR_13, 0);
  if (VAR_17 == 0x1d) {
   VAR_15->slot_status = VAR_10;
  }
 }


 if (VAR_15->slot_status != VAR_8) {
  if (VAR_15->slot_status & VAR_10) {
   return VAR_1 | VAR_2;
  }
  return VAR_1;
 }
 return 0;
}
