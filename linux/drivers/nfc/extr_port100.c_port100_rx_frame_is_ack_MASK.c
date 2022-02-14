
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port100_ack_frame {scalar_t__ start_frame; scalar_t__ ack_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct port100_ack_frame *VAR_2)
{
 return (VAR_2->start_frame == FUNC_0(VAR_1) &&
  VAR_2->ack_frame == FUNC_0(VAR_0));
}
