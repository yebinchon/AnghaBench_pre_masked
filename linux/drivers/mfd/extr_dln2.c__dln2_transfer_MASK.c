
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct dln2_rx_context {TYPE_2__* urb; int done; } ;
struct TYPE_6__ {int size; } ;
struct dln2_response {int result; TYPE_3__ hdr; } ;
struct dln2_mod_rx_slots {struct dln2_rx_context* slots; } ;
struct dln2_dev {int disconnect_wq; scalar_t__ disconnect; int disconnect_lock; int active_transfers; struct dln2_mod_rx_slots* mod_rx_slots; TYPE_1__* interface; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct dln2_response* transfer_buffer; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dln2_dev*,size_t) ;
 int FUNC_1 (struct device*,char*,size_t,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct dln2_dev*,size_t,size_t,int,void const*,unsigned int) ;
 int FUNC_4 (struct dln2_dev*,size_t,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*,struct dln2_response*,unsigned int) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long const) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dln2_dev *VAR_5, u16 VAR_6, u16 VAR_7,
     const void *VAR_8, unsigned VAR_9,
     void *VAR_10, unsigned *VAR_11)
{
 int VAR_12 = 0;
 int VAR_13;
 struct dln2_response *VAR_14;
 struct dln2_rx_context *VAR_15;
 struct device *VAR_16 = &VAR_5->interface->dev;
 const unsigned long VAR_17 = FUNC_7(VAR_0);
 struct dln2_mod_rx_slots *VAR_18 = &VAR_5->mod_rx_slots[VAR_6];
 int VAR_19;

 FUNC_8(&VAR_5->disconnect_lock);
 if (!VAR_5->disconnect)
  VAR_5->active_transfers++;
 else
  VAR_12 = -VAR_1;
 FUNC_9(&VAR_5->disconnect_lock);

 if (VAR_12)
  return VAR_12;

 VAR_13 = FUNC_0(VAR_5, VAR_6);
 if (VAR_13 < 0) {
  VAR_12 = VAR_13;
  goto out_decr;
 }

 VAR_12 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_13, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_2(VAR_16, "USB write failed: %d\n", VAR_12);
  goto out_free_rx_slot;
 }

 VAR_15 = &VAR_18->slots[VAR_13];

 VAR_12 = FUNC_10(&VAR_15->done, VAR_17);
 if (VAR_12 <= 0) {
  if (!VAR_12)
   VAR_12 = -VAR_4;
  goto out_free_rx_slot;
 } else {
  VAR_12 = 0;
 }

 if (VAR_5->disconnect) {
  VAR_12 = -VAR_1;
  goto out_free_rx_slot;
 }


 VAR_14 = VAR_15->urb->transfer_buffer;
 VAR_19 = FUNC_5(VAR_14->hdr.size);

 if (VAR_19 < sizeof(*VAR_14)) {
  VAR_12 = -VAR_2;
  goto out_free_rx_slot;
 }

 if (FUNC_5(VAR_14->result) > 0x80) {
  FUNC_1(VAR_16, "%d received response with error %d\n",
   VAR_6, FUNC_5(VAR_14->result));
  VAR_12 = -VAR_3;
  goto out_free_rx_slot;
 }

 if (!VAR_10)
  goto out_free_rx_slot;

 if (*VAR_11 > VAR_19 - sizeof(*VAR_14))
  *VAR_11 = VAR_19 - sizeof(*VAR_14);

 FUNC_6(VAR_10, VAR_14 + 1, *VAR_11);

out_free_rx_slot:
 FUNC_4(VAR_5, VAR_6, VAR_13);
out_decr:
 FUNC_8(&VAR_5->disconnect_lock);
 VAR_5->active_transfers--;
 FUNC_9(&VAR_5->disconnect_lock);
 if (VAR_5->disconnect)
  FUNC_11(&VAR_5->disconnect_wq);

 return VAR_12;
}
