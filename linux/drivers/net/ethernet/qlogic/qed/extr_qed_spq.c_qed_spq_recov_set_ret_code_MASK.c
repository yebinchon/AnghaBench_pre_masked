
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ protocol_id; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
struct qed_spq_entry {TYPE_2__ elem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct qed_spq_entry *VAR_3,
           u8 *VAR_4)
{
 if (!VAR_4)
  return;

 if (VAR_3->elem.hdr.protocol_id == VAR_1 ||
     VAR_3->elem.hdr.protocol_id == VAR_0)
  *VAR_4 = VAR_2;
}
