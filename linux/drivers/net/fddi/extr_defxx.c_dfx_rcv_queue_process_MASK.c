
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int protocol; scalar_t__ data; } ;
typedef int dma_addr_t ;
struct TYPE_20__ {int name; } ;
struct TYPE_16__ {scalar_t__ rcv_comp; int rcv_prod; } ;
struct TYPE_17__ {TYPE_5__ index; } ;
struct TYPE_19__ {char** p_rcv_buff_va; TYPE_6__ rcv_xmt_reg; int rcv_multicast_frames; int rcv_total_frames; int rcv_total_bytes; TYPE_9__* dev; int bus_dev; int rcv_discards; TYPE_4__* descr_block_virt; int rcv_length_errors; int rcv_frame_status_errors; int rcv_crc_errors; TYPE_1__* cons_block_virt; } ;
struct TYPE_13__ {scalar_t__ rcv_cons; } ;
struct TYPE_18__ {TYPE_2__ index; } ;
struct TYPE_15__ {TYPE_3__* rcv_data; } ;
struct TYPE_14__ {int long_1; } ;
struct TYPE_12__ {int xmt_rcv_data; } ;
typedef TYPE_7__ PI_TYPE_2_CONSUMER ;
typedef TYPE_8__ DFX_board_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int,int ,int ) ;
 int FUNC_6 (struct sk_buff*,TYPE_9__*) ;
 int FUNC_7 (int*,char*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_9 (TYPE_9__*,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (struct sk_buff*,char*,int ) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_15(
 DFX_board_t *VAR_13
 )

 {
 PI_TYPE_2_CONSUMER *VAR_14;
 char *VAR_15;
 u32 VAR_16, VAR_17;
 struct sk_buff *VAR_18 = ((void*)0);



 VAR_14 = (PI_TYPE_2_CONSUMER *)(&VAR_13->cons_block_virt->xmt_rcv_data);
 while (VAR_13->rcv_xmt_reg.index.rcv_comp != VAR_14->index.rcv_cons)
  {

  dma_addr_t VAR_19;
  int VAR_20;

  VAR_20 = VAR_13->rcv_xmt_reg.index.rcv_comp;



  VAR_15 = VAR_13->p_rcv_buff_va[VAR_20];

  VAR_19 = VAR_13->descr_block_virt->rcv_data[VAR_20].long_1;
  FUNC_4(VAR_13->bus_dev,
     VAR_19 + VAR_10,
     sizeof(u32),
     VAR_0);
  FUNC_7(&VAR_16, VAR_15 + VAR_10, sizeof(u32));

  if (VAR_16 & VAR_6)
   {
   if (VAR_16 & VAR_5)
    VAR_13->rcv_crc_errors++;
   else
    VAR_13->rcv_frame_status_errors++;
   }
  else
  {
   int VAR_21 = 0;



   VAR_17 = (u32)((VAR_16 & VAR_4) >> VAR_7);
   VAR_17 -= 4;
   if (!FUNC_0(VAR_17, VAR_2, VAR_1))
    VAR_13->rcv_length_errors++;
   else{
     VAR_18 = FUNC_9(VAR_13->dev,
              VAR_17 + 3);
    if (VAR_18 == ((void*)0))
     {
     FUNC_11("%s: Could not allocate receive buffer.  Dropping packet.\n", VAR_13->dev->name);
     VAR_13->rcv_discards++;
     break;
     }
    else {
     if (!VAR_21) {

      FUNC_4(
       VAR_13->bus_dev,
       VAR_19 +
       VAR_11,
       VAR_17 + 3,
       VAR_0);

      FUNC_12(VAR_18,
              VAR_15 + VAR_11,
              VAR_17 + 3);
     }

     FUNC_14(VAR_18,3);
     FUNC_13(VAR_18, VAR_17);
     VAR_18->protocol = FUNC_6(VAR_18, VAR_13->dev);
     VAR_13->rcv_total_bytes += VAR_18->len;
     FUNC_10(VAR_18);


     VAR_13->rcv_total_frames++;
     if (*(VAR_15 + VAR_9) & 0x01)
      VAR_13->rcv_multicast_frames++;
    }
   }
   }
  VAR_13->rcv_xmt_reg.index.rcv_prod += 1;
  VAR_13->rcv_xmt_reg.index.rcv_comp += 1;
  }
 }
