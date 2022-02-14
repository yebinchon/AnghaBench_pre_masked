
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sdw_slave_runtime {TYPE_2__* slave; int direction; } ;
struct sdw_prepare_ch {size_t num; int ch_mask; int prepare; int bank; } ;
struct sdw_port_runtime {size_t num; int ch_mask; } ;
struct sdw_dpn_prop {scalar_t__ imp_def_interrupts; int ch_prep_timeout; int simple_ch_prep_sm; } ;
struct TYPE_6__ {int next_bank; } ;
struct sdw_bus {TYPE_1__ params; int * dev; } ;
struct completion {int dummy; } ;
struct TYPE_7__ {int dev; struct completion* port_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,size_t,int,scalar_t__) ;
 int FUNC_5 (struct sdw_slave_runtime*,struct sdw_prepare_ch,int ) ;
 struct sdw_dpn_prop* FUNC_6 (TYPE_2__*,int ,size_t) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int,int) ;
 unsigned int FUNC_9 (struct completion*,int ) ;

__attribute__((used)) static int FUNC_10(struct sdw_bus *VAR_4,
           struct sdw_slave_runtime *VAR_5,
           struct sdw_port_runtime *VAR_6,
           bool VAR_7)
{
 struct completion *VAR_8;
 struct sdw_dpn_prop *VAR_9;
 struct sdw_prepare_ch VAR_10;
 unsigned int VAR_11;
 bool VAR_12 = 0;
 int VAR_13 = 0, VAR_14;
 u32 VAR_15;

 VAR_10.num = VAR_6->num;
 VAR_10.ch_mask = VAR_6->ch_mask;

 VAR_9 = FUNC_6(VAR_5->slave,
       VAR_5->direction,
       VAR_10.num);
 if (!VAR_9) {
  FUNC_2(VAR_4->dev,
   "Slave Port:%d properties not found\n", VAR_10.num);
  return -VAR_0;
 }

 VAR_10.prepare = VAR_7;

 VAR_10.bank = VAR_4->params.next_bank;

 if (VAR_9->imp_def_interrupts || !VAR_9->simple_ch_prep_sm)
  VAR_12 = 1;






 if (VAR_7 && VAR_12) {
  VAR_13 = FUNC_4(VAR_5->slave, VAR_6->num, VAR_7,
          VAR_9->imp_def_interrupts);
  if (VAR_13 < 0)
   return VAR_13;
 }


 FUNC_5(VAR_5, VAR_10, VAR_3);


 if (!VAR_9->simple_ch_prep_sm) {
  VAR_15 = FUNC_0(VAR_6->num);

  if (VAR_7)
   VAR_13 = FUNC_8(VAR_5->slave, VAR_15,
      0xFF, VAR_6->ch_mask);
  else
   VAR_13 = FUNC_8(VAR_5->slave, VAR_15, 0xFF, 0x0);

  if (VAR_13 < 0) {
   FUNC_2(&VAR_5->slave->dev,
    "Slave prep_ctrl reg write failed\n");
   return VAR_13;
  }


  VAR_8 = &VAR_5->slave->port_ready[VAR_10.num];
  VAR_11 = FUNC_9(VAR_8,
    FUNC_3(VAR_9->ch_prep_timeout));

  VAR_14 = FUNC_7(VAR_5->slave, FUNC_1(VAR_6->num));
  VAR_14 &= VAR_6->ch_mask;
  if (!VAR_11 || VAR_14) {
   FUNC_2(&VAR_5->slave->dev,
    "Chn prep failed for port:%d\n", VAR_10.num);
   return -VAR_1;
  }
 }


 FUNC_5(VAR_5, VAR_10, VAR_2);


 if (!VAR_7 && VAR_12)
  VAR_13 = FUNC_4(VAR_5->slave, VAR_6->num, VAR_7,
          VAR_9->imp_def_interrupts);

 return VAR_13;
}
