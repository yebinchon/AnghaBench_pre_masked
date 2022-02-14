
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_dmaring {struct b43_dmadesc64* descbase; struct b43_dmadesc_meta* meta; } ;
struct b43_dmadesc_meta {int dummy; } ;
struct b43_dmadesc_generic {int dummy; } ;
struct b43_dmadesc64 {int dummy; } ;



__attribute__((used)) static
struct b43_dmadesc_generic *FUNC_0(struct b43_dmaring *VAR_0,
       int VAR_1,
       struct b43_dmadesc_meta **VAR_2)
{
 struct b43_dmadesc64 *VAR_3;

 *VAR_2 = &(VAR_0->meta[VAR_1]);
 VAR_3 = VAR_0->descbase;
 VAR_3 = &(VAR_3[VAR_1]);

 return (struct b43_dmadesc_generic *)VAR_3;
}
