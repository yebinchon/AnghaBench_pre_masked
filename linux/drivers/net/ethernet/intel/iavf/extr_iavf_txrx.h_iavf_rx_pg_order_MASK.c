
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_ring {int rx_buf_len; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct iavf_ring *VAR_1)
{

 if (VAR_1->rx_buf_len > (VAR_0 / 2))
  return 1;

 return 0;
}
