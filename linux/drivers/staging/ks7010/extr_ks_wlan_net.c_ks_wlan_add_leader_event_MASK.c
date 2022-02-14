
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rsn_ie {int id; int size; int* body; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ data; } ;
struct iw_event {TYPE_2__ u; int cmd; } ;
typedef int rsn_leader ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct iw_event*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_4(const char *VAR_2, char *VAR_3,
          char *VAR_4, struct rsn_ie *VAR_5,
          struct iw_event *VAR_6,
          struct iw_request_info *VAR_7)
{
 char VAR_8[VAR_1 * 2 + 30];
 char *VAR_9;
 int VAR_10;

 VAR_9 = &VAR_8[0];
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->cmd = VAR_0;
 FUNC_1(VAR_8, VAR_2, sizeof(VAR_2) - 1);
 VAR_6->u.data.length += sizeof(VAR_2) - 1;
 VAR_9 += sizeof(VAR_2) - 1;
 VAR_9 += FUNC_3(VAR_9, "%02x", VAR_5->id);
 VAR_9 += FUNC_3(VAR_9, "%02x", VAR_5->size);
 VAR_6->u.data.length += 4;

 for (VAR_10 = 0; VAR_10 < VAR_5->size; VAR_10++)
  VAR_9 += FUNC_3(VAR_9, "%02x", VAR_5->body[VAR_10]);

 VAR_6->u.data.length += VAR_5->size * 2;

 return FUNC_0(VAR_7, VAR_4, VAR_3, VAR_6, &VAR_8[0]);
}
