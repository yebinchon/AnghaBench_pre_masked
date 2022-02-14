
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entry_cnt; int entry_type; } ;
struct Marker_Entry {scalar_t__ rsvd; int modifier; TYPE_1__ hdr; } ;
struct Command_Entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Marker_Entry*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct Command_Entry *VAR_2)
{
 struct Marker_Entry *VAR_3 = (struct Marker_Entry *) VAR_2;

 FUNC_0(VAR_3, 0, sizeof(struct Marker_Entry));
 VAR_3->hdr.entry_cnt = 1;
 VAR_3->hdr.entry_type = VAR_0;
 VAR_3->modifier = VAR_1;
 VAR_3->rsvd = 0;
}
