
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int return_code; } ;
struct TYPE_5__ {int return_code; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct TYPE_7__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_4__ hdr; TYPE_3__ data; } ;



__attribute__((used)) static int FUNC_0(struct qeth_ipa_cmd *VAR_0)
{
 if (!VAR_0->hdr.return_code)
  VAR_0->hdr.return_code =
   VAR_0->data.setadapterparms.hdr.return_code;
 return VAR_0->hdr.return_code;
}
