
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_gru_mq_uv {unsigned long order; struct xpc_gru_mq_uv* gru_mq_desc; scalar_t__ address; int irq; int mmr_value; int mmr_blade; } ;
struct uv_IO_APIC_route_entry {int dest; int vector; } ;
struct page {int dummy; } ;
struct gru_message_queue_desc {int dummy; } ;
typedef int irq_handler_t ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct xpc_gru_mq_uv* FUNC_0 (int) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (unsigned long,int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct xpc_gru_mq_uv*,scalar_t__,unsigned int,int,int ,int ) ;
 int FUNC_9 (struct xpc_gru_mq_uv*) ;
 struct xpc_gru_mq_uv* FUNC_10 (int,int) ;
 struct xpc_gru_mq_uv* FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (struct page*) ;
 int FUNC_13 (int ,int ,int ,char*,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int VAR_7 ;
 int FUNC_16 (int ,unsigned int) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct xpc_gru_mq_uv*,int,char*) ;
 int FUNC_19 (struct xpc_gru_mq_uv*) ;
 int FUNC_20 (struct xpc_gru_mq_uv*) ;
 int VAR_8 ;
 int FUNC_21 (struct xpc_gru_mq_uv*) ;

__attribute__((used)) static struct xpc_gru_mq_uv *
FUNC_22(unsigned int VAR_9, int VAR_10, char *VAR_11,
       irq_handler_t VAR_12)
{
 enum xp_retval VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;
 struct page *VAR_18;
 struct xpc_gru_mq_uv *VAR_19;
 struct uv_IO_APIC_route_entry *VAR_20;

 VAR_19 = FUNC_10(sizeof(struct xpc_gru_mq_uv), VAR_3);
 if (VAR_19 == ((void*)0)) {
  FUNC_4(VAR_8, "xpc_create_gru_mq_uv() failed to kmalloc() "
   "a xpc_gru_mq_uv structure\n");
  VAR_14 = -VAR_2;
  goto out_0;
 }

 VAR_19->gru_mq_desc = FUNC_11(sizeof(struct gru_message_queue_desc),
      VAR_3);
 if (VAR_19->gru_mq_desc == ((void*)0)) {
  FUNC_4(VAR_8, "xpc_create_gru_mq_uv() failed to kmalloc() "
   "a gru_message_queue_desc structure\n");
  VAR_14 = -VAR_2;
  goto out_1;
 }

 VAR_17 = FUNC_7(VAR_9);
 VAR_19->order = VAR_17 + VAR_4;
 VAR_9 = 1UL << VAR_19->order;

 VAR_19->mmr_blade = FUNC_14(VAR_10);

 VAR_15 = FUNC_3(VAR_10);
 VAR_18 = FUNC_2(VAR_15,
          VAR_3 | VAR_6 | VAR_5,
          VAR_17);
 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_8, "xpc_create_gru_mq_uv() failed to alloc %d "
   "bytes of memory on nid=%d for GRU mq\n", VAR_9, VAR_15);
  VAR_14 = -VAR_2;
  goto out_2;
 }
 VAR_19->address = FUNC_12(VAR_18);


 VAR_14 = FUNC_19(VAR_19);
 if (VAR_14 != 0)
  goto out_3;

 VAR_14 = FUNC_18(VAR_19, VAR_10, VAR_11);
 if (VAR_14 != 0)
  goto out_4;

 VAR_14 = FUNC_13(VAR_19->irq, VAR_12, 0, VAR_11, ((void*)0));
 if (VAR_14 != 0) {
  FUNC_4(VAR_8, "request_irq(irq=%d) returned error=%d\n",
   VAR_19->irq, -VAR_14);
  goto out_5;
 }

 VAR_16 = FUNC_1(FUNC_15(VAR_10));

 VAR_20 = (struct uv_IO_APIC_route_entry *)&VAR_19->mmr_value;
 VAR_14 = FUNC_8(VAR_19->gru_mq_desc, VAR_19->address, VAR_9,
         VAR_16, VAR_20->vector, VAR_20->dest);
 if (VAR_14 != 0) {
  FUNC_4(VAR_8, "gru_create_message_queue() returned "
   "error=%d\n", VAR_14);
  VAR_14 = -VAR_1;
  goto out_6;
 }


 VAR_13 = FUNC_16(FUNC_17(VAR_19->address), VAR_9);
 if (VAR_13 != VAR_7) {
  VAR_14 = -VAR_0;
  goto out_6;
 }

 return VAR_19;


out_6:
 FUNC_5(VAR_19->irq, ((void*)0));
out_5:
 FUNC_21(VAR_19);
out_4:
 FUNC_20(VAR_19);
out_3:
 FUNC_6((unsigned long)VAR_19->address, VAR_17);
out_2:
 FUNC_9(VAR_19->gru_mq_desc);
out_1:
 FUNC_9(VAR_19);
out_0:
 return FUNC_0(VAR_14);
}
