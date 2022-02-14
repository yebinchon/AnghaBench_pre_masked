
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char sockaddr ;
struct nsm_handle {char* sm_name; size_t sm_addrlen; int sm_addrbuf; int sm_count; } ;


 int VAR_0 ;
 struct nsm_handle* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char const*,size_t const) ;
 char* FUNC_2 (struct nsm_handle*) ;
 int FUNC_3 (struct nsm_handle*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (char*,int ,int) ;
 int FUNC_6 (int ,int,char*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static struct nsm_handle *FUNC_8(const struct sockaddr *VAR_1,
         const size_t VAR_2,
         const char *VAR_3,
         const size_t VAR_4)
{
 struct nsm_handle *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5) + VAR_4 + 1, VAR_0);
 if (FUNC_7(VAR_5 == ((void*)0)))
  return ((void*)0);

 FUNC_4(&VAR_5->sm_count, 1);
 VAR_5->sm_name = (char *)(VAR_5 + 1);
 FUNC_1(FUNC_2(VAR_5), VAR_1, VAR_2);
 VAR_5->sm_addrlen = VAR_2;
 FUNC_3(VAR_5);

 if (FUNC_5(FUNC_2(VAR_5), VAR_5->sm_addrbuf,
     sizeof(VAR_5->sm_addrbuf)) == 0)
  (void)FUNC_6(VAR_5->sm_addrbuf, sizeof(VAR_5->sm_addrbuf),
    "unsupported address family");
 FUNC_1(VAR_5->sm_name, VAR_3, VAR_4);
 VAR_5->sm_name[VAR_4] = '\0';

 return VAR_5;
}
