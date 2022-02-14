
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int element_id; } ;
struct uwb_ie_drp {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uwb_ie_drp* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uwb_ie_drp*,int ,int ) ;

__attribute__((used)) static struct uwb_ie_drp *FUNC_2(void)
{
 struct uwb_ie_drp *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_4, VAR_3, VAR_2),
    VAR_0);
 if (VAR_4)
  VAR_4->hdr.element_id = VAR_1;
 return VAR_4;
}
