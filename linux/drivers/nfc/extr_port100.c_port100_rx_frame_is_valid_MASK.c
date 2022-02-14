
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct port100_frame {scalar_t__ start_frame; scalar_t__ extended_frame; scalar_t__ datalen_checksum; int datalen; int data; } ;


 scalar_t__ FUNC_0 (struct port100_frame*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static bool FUNC_5(void *VAR_2)
{
 u8 VAR_3;
 struct port100_frame *VAR_4 = VAR_2;

 if (VAR_4->start_frame != FUNC_1(VAR_1) ||
     VAR_4->extended_frame != FUNC_1(VAR_0))
  return 0;

 VAR_3 = FUNC_3(FUNC_2(VAR_4->datalen));
 if (VAR_3 != VAR_4->datalen_checksum)
  return 0;

 VAR_3 = FUNC_4(VAR_4->data,
      FUNC_2(VAR_4->datalen));
 if (VAR_3 != FUNC_0(VAR_4))
  return 0;

 return 1;
}
