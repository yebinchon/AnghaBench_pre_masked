
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sd {int blocks_left; int* jpeg_hdr; } ;
struct gspca_dev {int last_packet_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,...) ;
 int FUNC_1 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_10,
   u8 *VAR_11, int VAR_12)
{
 struct sd *VAR_13 = (struct sd *) VAR_10;
 int VAR_14;
 u32 VAR_15;

 FUNC_0(VAR_10, VAR_2, "Got %d bytes out of %d for Block 0\n",
    VAR_12, VAR_7);
 if (VAR_12 != VAR_7) {
  FUNC_0(VAR_10, VAR_1, "bad length\n");
  goto discard;
 }

 VAR_15 = ((u32 *)VAR_11)[0];
 if (VAR_15 == VAR_5) {
  VAR_13->blocks_left = VAR_11[0x0a] - 1;
  FUNC_0(VAR_10, VAR_2, "blocks_left = 0x%x\n",
     VAR_13->blocks_left);

  FUNC_1(VAR_10, VAR_3,
    VAR_13->jpeg_hdr, VAR_8);

  FUNC_1(VAR_10, VAR_6,
    VAR_11 + VAR_4,
    VAR_7 - VAR_4);
 } else if (VAR_13->blocks_left > 0) {
  FUNC_0(VAR_10, VAR_2, "%d blocks remaining for frame\n",
     VAR_13->blocks_left);
  VAR_13->blocks_left -= 1;
  if (VAR_13->blocks_left == 0)
   VAR_14 = VAR_9;
  else
   VAR_14 = VAR_6;
  FUNC_1(VAR_10, VAR_14,
    VAR_11, VAR_7);
 } else
  goto discard;
 return;
discard:

 VAR_10->last_packet_type = VAR_0;
}
