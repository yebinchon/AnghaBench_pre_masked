
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ u8 ;
struct sd {int stream_flag; } ;
struct pkt_hdr {char* magic; scalar_t__ flag; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,scalar_t__*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3, u8 *VAR_4, int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;

 struct pkt_hdr *VAR_7 = (void *)VAR_4;
 uint8_t *VAR_8 = VAR_4 + sizeof(*VAR_7);
 int VAR_9 = VAR_5 - sizeof(*VAR_7);

 uint8_t VAR_10 = VAR_6->stream_flag | 1;
 uint8_t VAR_11 = VAR_6->stream_flag | 2;
 uint8_t VAR_12 = VAR_6->stream_flag | 5;

 if (VAR_5 < 12)
  return;

 if (VAR_7->magic[0] != 'R' || VAR_7->magic[1] != 'B') {
  FUNC_1("[Stream %02x] Invalid magic %02x%02x\n",
   VAR_6->stream_flag, VAR_7->magic[0], VAR_7->magic[1]);
  return;
 }

 if (VAR_7->flag == VAR_10)
  FUNC_0(VAR_3, VAR_0, VAR_8, VAR_9);

 else if (VAR_7->flag == VAR_11)
  FUNC_0(VAR_3, VAR_1, VAR_8, VAR_9);

 else if (VAR_7->flag == VAR_12)
  FUNC_0(VAR_3, VAR_2, VAR_8, VAR_9);

 else
  FUNC_1("Packet type not recognized...\n");
}
