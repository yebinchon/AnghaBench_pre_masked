
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intr_info {int member_0; char* member_1; int member_2; int member_3; } ;
struct csio_hw {int dummy; } ;
 int VAR_0 ;

 scalar_t__ FUNC_0 (struct csio_hw*,int ,struct intr_info*) ;
 int FUNC_1 (struct csio_hw*) ;

__attribute__((used)) static void FUNC_2(struct csio_hw *VAR_1)
{
 static struct intr_info VAR_2[] = {
  { 132, "PMTX channel 0 pcmd too large", -1, 1 },
  { 131, "PMTX channel 1 pcmd too large", -1, 1 },
  { 130, "PMTX channel 2 pcmd too large", -1, 1 },
  { 128, "PMTX 0-length pcmd", -1, 1 },
  { 0xffffff0, "PMTX framing error", -1, 1 },
  { 133, "PMTX oespi parity error", -1, 1 },
  { 135, "PMTX db_options parity error", -1,
    1 },
  { 134, "PMTX icspi parity error", -1, 1 },
  { 129, "PMTX c_pcmd parity error", -1, 1},
  { 0, ((void*)0), 0, 0 }
 };

 if (FUNC_0(VAR_1, VAR_0, VAR_2))
  FUNC_1(VAR_1);
}
