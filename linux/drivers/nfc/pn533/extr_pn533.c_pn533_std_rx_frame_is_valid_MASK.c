
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pn533_std_frame {scalar_t__ start_frame; scalar_t__ datalen_checksum; int datalen; int data; } ;
struct pn533_ext_frame {scalar_t__ datalen_checksum; int datalen; int data; } ;
struct pn533 {TYPE_1__* ops; } ;
struct TYPE_2__ {int rx_header_len; } ;


 scalar_t__ FUNC_0 (struct pn533_ext_frame*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pn533_std_frame*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct pn533_std_frame*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static bool FUNC_9(void *VAR_3, struct pn533 *VAR_4)
{
 u8 VAR_5;
 struct pn533_std_frame *VAR_6 = VAR_3;

 if (VAR_6->start_frame != FUNC_4(VAR_2))
  return 0;

 if (FUNC_5(!FUNC_2(VAR_6))) {

  VAR_4->ops->rx_header_len = VAR_1;

  VAR_5 = FUNC_7(VAR_6->datalen);
  if (VAR_5 != VAR_6->datalen_checksum)
   return 0;

  VAR_5 = FUNC_8(VAR_6->data, VAR_6->datalen);
  if (VAR_5 != FUNC_1(VAR_6))
   return 0;
 } else {

  struct pn533_ext_frame *VAR_7 = VAR_3;

  VAR_4->ops->rx_header_len = VAR_0;

  VAR_5 = FUNC_6(FUNC_3(VAR_7->datalen));
  if (VAR_5 != VAR_7->datalen_checksum)
   return 0;


  VAR_5 = FUNC_8(VAR_7->data,
         FUNC_3(VAR_7->datalen));
  if (VAR_5 != FUNC_0(VAR_7))
   return 0;
 }

 return 1;
}
