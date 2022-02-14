
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int dummy; } ;
typedef int ap_qid_t ;


 struct ap_queue_status FUNC_0 (int,unsigned long long,void*,size_t) ;

__attribute__((used)) static inline struct ap_queue_status
FUNC_1(ap_qid_t VAR_0, unsigned long long VAR_1, void *VAR_2, size_t VAR_3,
   unsigned int VAR_4)
{
 if (VAR_4 == 1)
  VAR_0 |= 0x400000UL;
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
