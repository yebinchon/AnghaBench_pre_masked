
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct console_data {scalar_t__ start_addr; scalar_t__ end_of_data; TYPE_1__* hdr; } ;
struct TYPE_2__ {int last_byte; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct console_data *VAR_0)
{
 u32 VAR_1 = FUNC_1(&VAR_0->hdr->last_byte);

 VAR_0->end_of_data = VAR_0->start_addr + FUNC_0(VAR_1);
}
