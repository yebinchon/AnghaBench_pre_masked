
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * setup_packet; } ;
struct mon_event_text {scalar_t__ xfertype; int setup; } ;
struct mon_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static inline char FUNC_1(struct mon_event_text *VAR_2,
    struct urb *VAR_3, char VAR_4, struct mon_bus *VAR_5)
{

 if (VAR_2->xfertype != VAR_1 || VAR_4 != 'S')
  return '-';

 if (VAR_3->setup_packet == ((void*)0))
  return 'Z';

 FUNC_0(VAR_2->setup, VAR_3->setup_packet, VAR_0);
 return 0;
}
