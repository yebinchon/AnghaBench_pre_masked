
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int pkt_seq; int const* jpeg_hdr; } ;
struct gspca_dev {scalar_t__ last_packet_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int*,int) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;
 static const u8 VAR_8[] = {0xff, 0xd9};







 if (VAR_6 < 3)
  return;
 if (*VAR_5 == 0x02) {
  if (VAR_5[1] & 0x02) {
   VAR_7->pkt_seq = !(VAR_5[1] & 1);
   FUNC_0(VAR_4, VAR_5 + 2, VAR_6 - 2);
   FUNC_1(VAR_4, VAR_3,
     VAR_8, 2);
   return;
  }
  if ((VAR_5[1] & 1) != VAR_7->pkt_seq)
   goto err;
  if (VAR_4->last_packet_type == VAR_3)
   FUNC_1(VAR_4, VAR_1,
     VAR_7->jpeg_hdr, VAR_2);
  FUNC_0(VAR_4, VAR_5 + 2, VAR_6 - 2);
  return;
 }
err:
 VAR_4->last_packet_type = VAR_0;
}
