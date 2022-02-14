
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_response_get_version {int current_image; char* version_string_ro; char* version_string_rw; } ;
struct cros_ec_dev {int ec_dev; scalar_t__ cmd_offset; } ;
struct cros_ec_command {int insize; int result; scalar_t__ data; scalar_t__ command; } ;


 int FUNC_0 (char const* const*) ;
 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct cros_ec_command*) ;
 int FUNC_2 (struct cros_ec_command*) ;
 struct cros_ec_command* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_5(struct cros_ec_dev *VAR_4, char *VAR_5, int VAR_6)
{
 static const char * const VAR_7[] = {
  "unknown", "read-only", "read-write", "invalid",
 };
 struct ec_response_get_version *VAR_8;
 struct cros_ec_command *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(sizeof(*VAR_9) + sizeof(*VAR_8), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->command = VAR_1 + VAR_4->cmd_offset;
 VAR_9->insize = sizeof(*VAR_8);

 VAR_10 = FUNC_1(VAR_4->ec_dev, VAR_9);
 if (VAR_10 < 0) {
  FUNC_4(VAR_5, VAR_6,
    "Unknown EC version, returned error: %d\n",
    VAR_9->result);
  goto exit;
 }

 VAR_8 = (struct ec_response_get_version *)VAR_9->data;
 if (VAR_8->current_image >= FUNC_0(VAR_7))
  VAR_8->current_image = 3;

 FUNC_4(VAR_5, VAR_6, "%s\n%s\n%s\n%s\n", VAR_0,
   VAR_8->version_string_ro, VAR_8->version_string_rw,
   VAR_7[VAR_8->current_image]);

 VAR_10 = 0;
exit:
 FUNC_2(VAR_9);
 return VAR_10;
}
