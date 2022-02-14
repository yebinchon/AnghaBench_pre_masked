
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {TYPE_1__* desc; int data; } ;
struct TYPE_2__ {int tlv_size; } ;


 int FUNC_0 (struct rocker_tlv const**,int,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(const struct rocker_tlv **VAR_0, int VAR_1,
        const struct rocker_desc_info *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2->data,
    VAR_2->desc->tlv_size);
}
