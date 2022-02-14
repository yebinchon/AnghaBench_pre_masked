
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
  { 128, "ULPTX channel 3 PBL out of bounds", -1,
    0 },
  { 129, "ULPTX channel 2 PBL out of bounds", -1,
    0 },
  { 130, "ULPTX channel 1 PBL out of bounds", -1,
    0 },
  { 131, "ULPTX channel 0 PBL out of bounds", -1,
    0 },
  { 0xfffffff, "ULPTX parity error", -1, 1 },
  { 0, ((void*)0), 0, 0 }
 };

 if (FUNC_0(VAR_1, VAR_0, VAR_2))
  FUNC_1(VAR_1);
}
