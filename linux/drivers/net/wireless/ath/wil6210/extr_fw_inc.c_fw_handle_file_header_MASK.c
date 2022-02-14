
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_fw_record_file_header {scalar_t__ comment; int data_len; int version; } ;
struct wil6210_priv {int fw_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct wil6210_priv*,char*,int ,int ) ;
 int FUNC_4 (struct wil6210_priv*,char*,size_t) ;
 int FUNC_5 (char*,int ,int,int,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_6(struct wil6210_priv *VAR_4, const void *VAR_5,
     size_t VAR_6)
{
 const struct wil_fw_record_file_header *VAR_7 = VAR_5;

 if (VAR_6 != sizeof(*VAR_7)) {
  FUNC_4(VAR_4, "file header length incorrect: %zu\n", VAR_6);
  return -VAR_1;
 }

 FUNC_3(VAR_4, "new file, ver. %d, %i bytes\n",
     VAR_7->version, VAR_7->data_len);
 FUNC_5("", VAR_0, 16, 1, VAR_7->comment,
   sizeof(VAR_7->comment), 1);

 if (!FUNC_0(VAR_7->comment, VAR_2,
      VAR_3))
  FUNC_1(VAR_4->fw_version,
         VAR_7->comment + VAR_3,
         FUNC_2(sizeof(VAR_7->comment) - VAR_3,
      sizeof(VAR_4->fw_version) - 1));

 return 0;
}
