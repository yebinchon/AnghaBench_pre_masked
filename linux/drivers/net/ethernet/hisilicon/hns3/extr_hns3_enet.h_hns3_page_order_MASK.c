
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_ring {int buf_size; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct hns3_enet_ring *VAR_1)
{

 if (VAR_1->buf_size > (VAR_0 / 2))
  return 1;

 return 0;
}
