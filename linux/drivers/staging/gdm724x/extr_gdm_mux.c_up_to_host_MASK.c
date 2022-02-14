
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mux_rx {int offset; int len; int (* callback ) (int *,unsigned int,int,int ,int ) ;scalar_t__ buf; struct mux_dev* mux_dev; } ;
struct mux_pkt_header {int * data; int packet_type; int payload_size; int start_flag; } ;
struct mux_dev {int tty_dev; } ;


 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int *,unsigned int,int,int ,int ) ;
 int FUNC_6 (int *,unsigned int,int,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct mux_rx *VAR_6)
{
 struct mux_dev *VAR_7 = VAR_6->mux_dev;
 struct mux_pkt_header *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned short VAR_11;
 int VAR_12;
 u32 VAR_13 = VAR_6->offset;
 int VAR_14;
 int VAR_15 = VAR_5;
 int VAR_16 = VAR_6->len;

 while (1) {
  VAR_8 = (struct mux_pkt_header *)(VAR_6->buf +
             VAR_13);
  VAR_9 = FUNC_2(VAR_8->start_flag);
  VAR_10 = FUNC_2(VAR_8->payload_size);
  VAR_11 = FUNC_1(VAR_8->packet_type);

  if (VAR_9 != VAR_3) {
   FUNC_4("invalid START_FLAG %x\n", VAR_9);
   break;
  }

  VAR_12 = FUNC_0(VAR_0 + VAR_10, 4);

  if (VAR_16 - VAR_13 < VAR_12) {
   FUNC_4("invalid payload : %d %d %04x\n",
          VAR_10, VAR_16, VAR_11);
   break;
  }

  VAR_14 = FUNC_3(VAR_11);
  if (VAR_14 < 0) {
   FUNC_4("invalid index %d\n", VAR_14);
   break;
  }

  VAR_15 = VAR_6->callback(VAR_8->data,
    VAR_10,
    VAR_14,
    VAR_7->tty_dev,
    VAR_2
    );
  if (VAR_15 == VAR_4) {
   VAR_6->offset += VAR_13;
   break;
  }

  VAR_13 += VAR_12;
  if (VAR_16 - VAR_13 <= VAR_0 + 2) {
   VAR_15 = VAR_6->callback(((void*)0),
     0,
     VAR_14,
     VAR_7->tty_dev,
     VAR_1
     );
   break;
  }
 }

 return VAR_15;
}
