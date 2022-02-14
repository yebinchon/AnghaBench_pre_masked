
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct legacy_fs_context {unsigned int data_size; scalar_t__ param_type; char* legacy_data; } ;
struct fs_parameter {int type; int size; int * string; int * key; } ;
struct fs_context {int * source; struct legacy_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (struct fs_context*,char*,...) ;
 char* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,char,int) ;
 int FUNC_3 (char*,int *,size_t) ;
 scalar_t__ FUNC_4 (int *,char) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct fs_context *VAR_5, struct fs_parameter *VAR_6)
{
 struct legacy_fs_context *VAR_7 = VAR_5->fs_private;
 unsigned int VAR_8 = VAR_7->data_size;
 size_t VAR_9 = 0;

 if (FUNC_5(VAR_6->key, "source") == 0) {
  if (VAR_6->type != 128)
   return FUNC_0(VAR_5, "VFS: Legacy: Non-string source");
  if (VAR_5->source)
   return FUNC_0(VAR_5, "VFS: Legacy: Multiple sources");
  VAR_5->source = VAR_6->string;
  VAR_6->string = ((void*)0);
  return 0;
 }

 if (VAR_7->param_type == VAR_3)
  return FUNC_0(VAR_5, "VFS: Legacy: Can't mix monolithic and individual options");

 switch (VAR_6->type) {
 case 128:
  VAR_9 = 1 + VAR_6->size;

 case 129:
  VAR_9 += FUNC_6(VAR_6->key);
  break;
 default:
  return FUNC_0(VAR_5, "VFS: Legacy: Parameter type for '%s' not supported",
         VAR_6->key);
 }

 if (VAR_9 > VAR_4 - 2 - VAR_8)
  return FUNC_0(VAR_5, "VFS: Legacy: Cumulative options too large");
 if (FUNC_4(VAR_6->key, ',') ||
     (VAR_6->type == 128 &&
      FUNC_2(VAR_6->string, ',', VAR_6->size)))
  return FUNC_0(VAR_5, "VFS: Legacy: Option '%s' contained comma",
         VAR_6->key);
 if (!VAR_7->legacy_data) {
  VAR_7->legacy_data = FUNC_1(VAR_4, VAR_1);
  if (!VAR_7->legacy_data)
   return -VAR_0;
 }

 VAR_7->legacy_data[VAR_8++] = ',';
 VAR_9 = FUNC_6(VAR_6->key);
 FUNC_3(VAR_7->legacy_data + VAR_8, VAR_6->key, VAR_9);
 VAR_8 += VAR_9;
 if (VAR_6->type == 128) {
  VAR_7->legacy_data[VAR_8++] = '=';
  FUNC_3(VAR_7->legacy_data + VAR_8, VAR_6->string, VAR_6->size);
  VAR_8 += VAR_6->size;
 }
 VAR_7->legacy_data[VAR_8] = '\0';
 VAR_7->data_size = VAR_8;
 VAR_7->param_type = VAR_2;
 return 0;
}
