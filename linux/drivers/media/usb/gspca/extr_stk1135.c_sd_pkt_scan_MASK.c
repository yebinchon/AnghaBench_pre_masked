
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stk1135_pkt_header {int flags; int seq; int gpio; } ;
struct sd {int flip_status; int pkt_seq; scalar_t__ flip_debounce; } ;
struct gspca_dev {int last_packet_type; } ;
typedef enum gspca_packet_type { ____Placeholder_gspca_packet_type } gspca_packet_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_7,
   u8 *VAR_8,
   int VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_7;
 int VAR_11 = sizeof(struct stk1135_pkt_header);
 bool VAR_12;
 enum gspca_packet_type VAR_13 = VAR_3;
 struct stk1135_pkt_header *VAR_14 = (void *)VAR_8;
 u8 VAR_15;

 if (VAR_9 < 4) {
  FUNC_0(VAR_7, VAR_1, "received short packet (less than 4 bytes)\n");
  return;
 }


 VAR_12 = !(FUNC_2(VAR_14->gpio) & (1 << 8));

 if (VAR_10->flip_status != VAR_12)
  VAR_10->flip_debounce++;
 else
  VAR_10->flip_debounce = 0;


 if (!(VAR_14->flags & VAR_5)) {
  VAR_15 = VAR_14->seq & VAR_6;
  if (VAR_15 != VAR_10->pkt_seq) {
   FUNC_0(VAR_7, VAR_1, "received out-of-sequence packet\n");

   VAR_10->pkt_seq = VAR_15;
   VAR_7->last_packet_type = VAR_0;
   return;
  }
 }
 VAR_10->pkt_seq++;
 if (VAR_10->pkt_seq > VAR_6)
  VAR_10->pkt_seq = 0;

 if (VAR_9 == sizeof(struct stk1135_pkt_header))
  return;

 if (VAR_14->flags & VAR_5) {
  VAR_11 = 8;
  FUNC_1(VAR_7, VAR_4, VAR_8, 0);
  VAR_13 = VAR_2;
 }
 FUNC_1(VAR_7, VAR_13, VAR_8 + VAR_11, VAR_9 - VAR_11);
}
